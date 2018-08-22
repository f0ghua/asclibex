#ifndef _ALX_TIME_H_
#define _ALX_TIME_H_

/*!
 * \brief alx_tmtime_format
 *
 * Format the time_t value to string format time. The string format should like
 * following: (reference to http://www.cplusplus.com/reference/ctime/strftime/)
 *
 * %H:%M:%S - 00:00:00  hour:minute:second
 *
 * \param t
 * \param buf
 * \param bufsz
 * \param format
 * \return
 */
size_t alx_tmtime_format(time_t t, char *buf, size_t bufsz, const char *format);


#endif // _ALX_TIME_H_
