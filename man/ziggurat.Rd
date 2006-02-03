\name{ziggurat}
\alias{rziggurat}
\title{The Ziggurat normal and exponential generator}
\description{
  Generates normal and exponential random pseudo-random numbers by the method of Marsaglia and Tsang.
}
\usage{
rziggurat(n, normal=TRUE, new.start=FALSE, seed=556677)
}
\arguments{
	\item{n}{number of values to generate. If n is a vector, length(n) values will be generated}
	\item{normal}{logical scalar; if TRUE normal values are produced, otherwise exponential values}
	\item{new.start}{logical scalar. If TRUE the generator will be started afresh using the seed}
	\item{seed}{scalar 32 bit starting integer}
}
\value{
  Generates a vector of pseudo random numbers in the range 0 to 1. 
}

\note{
	This implementation running in \R is approximately three times as fast as rnorm().
}

\references{

Marsaglia, George, and Tsang, Wai Wan. 2000. The Ziggurat method for generating random variables. \emph{Journal of Statistical software.} \bold{5-8.} \url{http://www.jstatsoft.org/v05/i08/}
}
\author{
	Bob Wheeler \email{rwheeler@echip.com}
}
\examples{

rziggurat(50,new.start=TRUE)
rziggurat(50)
rziggurat(50,new.start=TRUE)

}
\keyword{distribution}