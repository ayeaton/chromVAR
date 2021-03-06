context('getCounts')

# Read in data needed for tests ------------------------------------------------

test_rg <- system.file("extdata", "test_RG.bam", package = "chromVAR")
test_bam1 <- system.file("extdata", "test_single1.bam", package = "chromVAR")
test_bam2 <- system.file("extdata", "test_single2.bam", package = "chromVAR")
test_bam3 <- system.file("extdata", "test_single3.bam", package = "chromVAR")
peaks_file <- system.file("extdata", "test_bed.txt", package = "chromVAR")
test_peaks <- getPeaks(peaks_file, sort = TRUE)
test_bed <- system.file("extdata", "test_reads.bed", package = "chromVAR")
test_bed_10x <- system.file("extdata", "test_x10_bed.tsv", package = "chromVAR")

# Test 10x bed file ------------------------------------------------------------

test_that("can read in 10x", {
  counts <- getCounts(test_bed_10x, test_peaks, is_10x = TRUE, format = "bed",
    paired = TRUE, colData = DataFrame(cell_name = c("Test")))
  expect_is(counts, "RangedSummarizedExperiment")
  # 861 unique barcodes = 861 cells
  expect_equal(ncol(assays(counts)$counts),861)
})

# Test 10x multiple bed files --------------------------------------------------

test_that("can read in two 10x bed files", {
  counts <- getCounts(c(test_bed_10x,test_bed_10x), test_peaks, is_10x = TRUE,
    format = "bed",paired = TRUE, colData = DataFrame(cell_name = c("Test1", "Test2")))
  expect_is(counts, "RangedSummarizedExperiment")
  # 861 unique barcodes = 861*2 cells
  expect_equal(ncol(assays(counts)$counts),1722)
})

# Test fragment counts with RG ___________--------------------------------------

test_that("can count fragments using RG tags", {
  counts <- getCounts(test_rg, test_peaks, by_rg = TRUE, paired = TRUE)
  expect_is(counts, "RangedSummarizedExperiment")
  expect_equal(assays(counts)$counts[11,2][[1]],1)
  expect_equal(sum(assays(counts)$counts),1)
  expect_equal(sum(colData(counts)$depth), 27)
})


# Test fragment counts with multiple bam --------------------------------------

test_that("can count fragments with multiple bams", {
  counts <- getCounts(c(test_bam1, test_bam2, test_bam3), test_peaks,
                      by_rg = FALSE, paired = TRUE)
  expect_is(counts, "RangedSummarizedExperiment")
  expect_equal(assays(counts)$counts[11,3][[1]],1)
  expect_equal(sum(assays(counts)$counts),1)
  expect_equal(colData(counts)$depth, c(26,14,2))
})



# Test fragment counts with bed file -------------------------------------------

test_that("can count fragments with bed file", {
  counts <- getCounts(test_bed, test_peaks, by_rg = FALSE, paired = FALSE,
                      format = "bed")
  expect_is(counts, "RangedSummarizedExperiment")
  expect_equal(assays(counts)$counts[2,1][[1]], 2)
  expect_equal(assays(counts)$counts[5,1][[1]], 1)
  expect_equal(colData(counts)$depth, 4)
  expect_equal(getTotalFragments(counts),3)
})
