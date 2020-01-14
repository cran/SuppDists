\name{SuppDists-defunct}
\alias{SuppDists-defunct}
\title{Defunct Functions in Package \pkg{SuppDists}}
\alias{rziggurat}
\alias{rMWC1019}
\description{
The functions listed here are no longer part of \pkg{SuppDists} as
they do not work on 64bit architectures.
}
\usage{
# Defunct in version 1.1-9.5
rziggurat(n, normal=TRUE, new.start=FALSE, seed=556677)
rMWC1019(n, new.start=FALSE, seed=556677)
}
\details{
Both RNG functions were developed for 32Bit architecture and do
not work correctly on 64Bit machines. Furthermore, the underlying
C++ code produces memory leaks as detected by \code{R CMD check --use-valgrind}.

\code{rziggurat} can be substituted with \code{zrnorm} of the package \pkg{RcppZiggurat}.
}
\seealso{
\code{\link{Defunct}}, \code{\link[RcppZiggurat]{zrnorm}}
}
\keyword{internal}
