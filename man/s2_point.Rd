% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/s2-point.R
\name{s2_point}
\alias{s2_point}
\alias{as_s2_point}
\alias{as_s2_point.s2_point}
\alias{as_s2_point.s2_lnglat}
\alias{as_s2_point.s2_geography}
\alias{as_s2_point.matrix}
\alias{as.data.frame.s2_point}
\alias{as.matrix.s2_point}
\title{Create an S2 Point Vector}
\usage{
s2_point(x, y, z)

as_s2_point(x, ...)

\method{as_s2_point}{s2_point}(x, ...)

\method{as_s2_point}{s2_lnglat}(x, ...)

\method{as_s2_point}{s2_geography}(x, ...)

\method{as_s2_point}{matrix}(x, ...)

\method{as.data.frame}{s2_point}(x, ...)

\method{as.matrix}{s2_point}(x, ...)
}
\arguments{
\item{x, y, z}{Vectors of latitude and longitude values in degrees.}

\item{...}{Unused}
}
\value{
An object with class s2_point
}
\description{
In S2 terminology, a "point" is a 3-dimensional unit vector representation
of an \code{\link[=s2_lnglat]{s2_lnglat()}}. Internally, all s2 objects are stored as
3-dimensional unit vectors.
}
\examples{
lnglat <- s2_lnglat(-64, 45) # Halifax, Nova Scotia!
as_s2_point(lnglat)
as.data.frame(as_s2_point(lnglat))

}
