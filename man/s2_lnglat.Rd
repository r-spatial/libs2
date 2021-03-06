% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/s2-lnglat.R
\name{s2_lnglat}
\alias{s2_lnglat}
\alias{as_s2_lnglat}
\alias{as_s2_lnglat.s2_lnglat}
\alias{as_s2_lnglat.s2_point}
\alias{as_s2_lnglat.s2_geography}
\alias{as_s2_lnglat.matrix}
\alias{as.data.frame.s2_lnglat}
\alias{as.matrix.s2_lnglat}
\alias{as_wkb.s2_lnglat}
\alias{as_wkt.s2_lnglat}
\title{Create an S2 LngLat Vector}
\usage{
s2_lnglat(lng, lat)

as_s2_lnglat(x, ...)

\method{as_s2_lnglat}{s2_lnglat}(x, ...)

\method{as_s2_lnglat}{s2_point}(x, ...)

\method{as_s2_lnglat}{s2_geography}(x, ...)

\method{as_s2_lnglat}{matrix}(x, ...)

\method{as.data.frame}{s2_lnglat}(x, ...)

\method{as.matrix}{s2_lnglat}(x, ...)

\method{as_wkb}{s2_lnglat}(x, ...)

\method{as_wkt}{s2_lnglat}(x, ...)
}
\arguments{
\item{lat, lng}{Vectors of latitude and longitude values in degrees.}

\item{x}{A \code{\link[=s2_lnglat]{s2_lnglat()}} vector or an object that can be coerced to one.}

\item{...}{Unused}
}
\value{
An object with class s2_lnglat
}
\description{
This class represents a latitude and longitude on the Earth's surface.
Most calculations in S2 convert this to a \code{\link[=as_s2_point]{as_s2_point()}}, which is a
unit vector representation of this value.
}
\examples{
s2_lnglat(45, -64) # Halifax, Nova Scotia!
as.data.frame(s2_lnglat(45, -64))

}
