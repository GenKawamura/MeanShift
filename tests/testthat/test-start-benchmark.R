context("test-benchmark")

test_that("Benchmarking Rcpp function", {

  ## Setting up
  source("setup.R")
  kernel <- "epanechnikovKernel"

  
  ## Benchmarking msClustering
  replications <- 1
  
  require(rbenchmark)
  a <- benchmark(msClustering( iris.data, h, multi.core=FALSE, legacy.mode=TRUE ),
            msClustering( iris.data, h, multi.core=FALSE, legacy.mode=FALSE ),
            columns=c("test", "replications", "elapsed", "relative"),
            order="relative",
            replications=replications)
  print(a)

  b <- benchmark(msClustering( iris.data, h, multi.core=TRUE, legacy.mode=TRUE ),
            msClustering( iris.data, h, multi.core=TRUE, legacy.mode=FALSE ),
            columns=c("test", "replications", "elapsed", "relative"),
            order="relative",
            replications=replications)
  print(b)
})

