/* this file should only be included by draw-char.c */
static unsigned const char font_default_lower[] = {
'\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\176', '\201', '\245', '\201', '\275', '\231', '\201', '\176',
'\176', '\377', '\333', '\377', '\303', '\347', '\377', '\176', '\154', '\376', '\376', '\376', '\174', '\070', '\020', '\000',
'\020', '\070', '\174', '\376', '\174', '\070', '\020', '\000', '\070', '\174', '\070', '\376', '\376', '\174', '\070', '\174',
'\020', '\020', '\070', '\174', '\376', '\174', '\070', '\174', '\000', '\000', '\030', '\074', '\074', '\030', '\000', '\000',
'\377', '\377', '\347', '\303', '\303', '\347', '\377', '\377', '\000', '\074', '\146', '\102', '\102', '\146', '\074', '\000',
'\377', '\303', '\231', '\275', '\275', '\231', '\303', '\377', '\017', '\007', '\017', '\175', '\314', '\314', '\314', '\170',
'\074', '\146', '\146', '\146', '\074', '\030', '\176', '\030', '\077', '\063', '\077', '\060', '\060', '\160', '\360', '\340',
'\177', '\143', '\177', '\143', '\143', '\147', '\346', '\300', '\231', '\132', '\074', '\347', '\347', '\074', '\132', '\231',
'\200', '\340', '\370', '\376', '\370', '\340', '\200', '\000', '\002', '\016', '\076', '\376', '\076', '\016', '\002', '\000',
'\030', '\074', '\176', '\030', '\030', '\176', '\074', '\030', '\146', '\146', '\146', '\146', '\146', '\000', '\146', '\000',
'\177', '\333', '\333', '\173', '\033', '\033', '\033', '\000', '\076', '\143', '\070', '\154', '\154', '\070', '\314', '\170',
'\000', '\000', '\000', '\000', '\176', '\176', '\176', '\000', '\030', '\074', '\176', '\030', '\176', '\074', '\030', '\377',
'\030', '\074', '\176', '\030', '\030', '\030', '\030', '\000', '\030', '\030', '\030', '\030', '\176', '\074', '\030', '\000',
'\000', '\030', '\014', '\376', '\014', '\030', '\000', '\000', '\000', '\060', '\140', '\376', '\140', '\060', '\000', '\000',
'\000', '\000', '\300', '\300', '\300', '\376', '\000', '\000', '\000', '\044', '\146', '\377', '\146', '\044', '\000', '\000',
'\000', '\030', '\074', '\176', '\377', '\377', '\000', '\000', '\000', '\377', '\377', '\176', '\074', '\030', '\000', '\000',
'\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\060', '\170', '\170', '\060', '\060', '\000', '\060', '\000',
'\154', '\154', '\154', '\000', '\000', '\000', '\000', '\000', '\154', '\154', '\376', '\154', '\376', '\154', '\154', '\000',
'\060', '\174', '\300', '\170', '\014', '\370', '\060', '\000', '\000', '\306', '\314', '\030', '\060', '\146', '\306', '\000',
'\070', '\154', '\070', '\166', '\334', '\314', '\166', '\000', '\140', '\140', '\300', '\000', '\000', '\000', '\000', '\000',
'\030', '\060', '\140', '\140', '\140', '\060', '\030', '\000', '\140', '\060', '\030', '\030', '\030', '\060', '\140', '\000',
'\000', '\146', '\074', '\377', '\074', '\146', '\000', '\000', '\000', '\060', '\060', '\374', '\060', '\060', '\000', '\000',
'\000', '\000', '\000', '\000', '\000', '\060', '\060', '\140', '\000', '\000', '\000', '\374', '\000', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\000', '\060', '\060', '\000', '\006', '\014', '\030', '\060', '\140', '\300', '\200', '\000',
'\174', '\306', '\316', '\336', '\366', '\346', '\174', '\000', '\060', '\160', '\060', '\060', '\060', '\060', '\374', '\000',
'\170', '\314', '\014', '\070', '\140', '\314', '\374', '\000', '\170', '\314', '\014', '\070', '\014', '\314', '\170', '\000',
'\034', '\074', '\154', '\314', '\376', '\014', '\036', '\000', '\374', '\300', '\370', '\014', '\014', '\314', '\170', '\000',
'\070', '\140', '\300', '\370', '\314', '\314', '\170', '\000', '\374', '\314', '\014', '\030', '\060', '\060', '\060', '\000',
'\170', '\314', '\314', '\170', '\314', '\314', '\170', '\000', '\170', '\314', '\314', '\174', '\014', '\030', '\160', '\000',
'\000', '\060', '\060', '\000', '\000', '\060', '\060', '\000', '\000', '\060', '\060', '\000', '\000', '\060', '\060', '\140',
'\030', '\060', '\140', '\300', '\140', '\060', '\030', '\000', '\000', '\000', '\374', '\000', '\000', '\374', '\000', '\000',
'\140', '\060', '\030', '\014', '\030', '\060', '\140', '\000', '\170', '\314', '\014', '\030', '\060', '\000', '\060', '\000',
'\174', '\306', '\336', '\336', '\336', '\300', '\170', '\000', '\060', '\170', '\314', '\314', '\374', '\314', '\314', '\000',
'\374', '\146', '\146', '\174', '\146', '\146', '\374', '\000', '\074', '\146', '\300', '\300', '\300', '\146', '\074', '\000',
'\370', '\154', '\146', '\146', '\146', '\154', '\370', '\000', '\376', '\142', '\150', '\170', '\150', '\142', '\376', '\000',
'\376', '\142', '\150', '\170', '\150', '\140', '\360', '\000', '\074', '\146', '\300', '\300', '\316', '\146', '\076', '\000',
'\314', '\314', '\314', '\374', '\314', '\314', '\314', '\000', '\170', '\060', '\060', '\060', '\060', '\060', '\170', '\000',
'\036', '\014', '\014', '\014', '\314', '\314', '\170', '\000', '\346', '\146', '\154', '\170', '\154', '\146', '\346', '\000',
'\360', '\140', '\140', '\140', '\142', '\146', '\376', '\000', '\306', '\356', '\376', '\376', '\326', '\306', '\306', '\000',
'\306', '\346', '\366', '\336', '\316', '\306', '\306', '\000', '\070', '\154', '\306', '\306', '\306', '\154', '\070', '\000',
'\374', '\146', '\146', '\174', '\140', '\140', '\360', '\000', '\170', '\314', '\314', '\314', '\334', '\170', '\034', '\000',
'\374', '\146', '\146', '\174', '\154', '\146', '\346', '\000', '\170', '\314', '\340', '\160', '\034', '\314', '\170', '\000',
'\374', '\264', '\060', '\060', '\060', '\060', '\170', '\000', '\314', '\314', '\314', '\314', '\314', '\314', '\374', '\000',
'\314', '\314', '\314', '\314', '\314', '\170', '\060', '\000', '\306', '\306', '\306', '\326', '\376', '\356', '\306', '\000',
'\306', '\306', '\154', '\070', '\070', '\154', '\306', '\000', '\314', '\314', '\314', '\170', '\060', '\060', '\170', '\000',
'\376', '\306', '\214', '\030', '\062', '\146', '\376', '\000', '\170', '\140', '\140', '\140', '\140', '\140', '\170', '\000',
'\300', '\140', '\060', '\030', '\014', '\006', '\002', '\000', '\170', '\030', '\030', '\030', '\030', '\030', '\170', '\000',
'\020', '\070', '\154', '\306', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\377',
'\060', '\060', '\030', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\170', '\014', '\174', '\314', '\166', '\000',
'\340', '\140', '\140', '\174', '\146', '\146', '\334', '\000', '\000', '\000', '\170', '\314', '\300', '\314', '\170', '\000',
'\034', '\014', '\014', '\174', '\314', '\314', '\166', '\000', '\000', '\000', '\170', '\314', '\374', '\300', '\170', '\000',
'\070', '\154', '\140', '\360', '\140', '\140', '\360', '\000', '\000', '\000', '\166', '\314', '\314', '\174', '\014', '\370',
'\340', '\140', '\154', '\166', '\146', '\146', '\346', '\000', '\060', '\000', '\160', '\060', '\060', '\060', '\170', '\000',
'\014', '\000', '\014', '\014', '\014', '\314', '\314', '\170', '\340', '\140', '\146', '\154', '\170', '\154', '\346', '\000',
'\160', '\060', '\060', '\060', '\060', '\060', '\170', '\000', '\000', '\000', '\314', '\376', '\376', '\326', '\306', '\000',
'\000', '\000', '\370', '\314', '\314', '\314', '\314', '\000', '\000', '\000', '\170', '\314', '\314', '\314', '\170', '\000',
'\000', '\000', '\334', '\146', '\146', '\174', '\140', '\360', '\000', '\000', '\166', '\314', '\314', '\174', '\014', '\036',
'\000', '\000', '\334', '\166', '\146', '\140', '\360', '\000', '\000', '\000', '\174', '\300', '\170', '\014', '\370', '\000',
'\020', '\060', '\174', '\060', '\060', '\064', '\030', '\000', '\000', '\000', '\314', '\314', '\314', '\314', '\166', '\000',
'\000', '\000', '\314', '\314', '\314', '\170', '\060', '\000', '\000', '\000', '\306', '\326', '\376', '\376', '\154', '\000',
'\000', '\000', '\306', '\154', '\070', '\154', '\306', '\000', '\000', '\000', '\314', '\314', '\314', '\174', '\014', '\370',
'\000', '\000', '\374', '\230', '\060', '\144', '\374', '\000', '\034', '\060', '\060', '\340', '\060', '\060', '\034', '\000',
'\030', '\030', '\030', '\000', '\030', '\030', '\030', '\000', '\340', '\060', '\060', '\034', '\060', '\060', '\340', '\000',
'\166', '\334', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\020', '\070', '\154', '\306', '\306', '\376', '\000',

};
static unsigned const char font_default_upper_itf[] = {
'\377', '\200', '\200', '\200', '\200', '\200', '\200', '\200', '\377', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
'\377', '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\200', '\200', '\200', '\200', '\200', '\200', '\200', '\200',
'\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\200', '\200', '\200', '\200', '\200', '\200', '\200', '\377',
'\000', '\000', '\000', '\000', '\000', '\000', '\000', '\377', '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\377',
'\200', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\001', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\000', '\000', '\000', '\200', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\001',
'\200', '\300', '\340', '\360', '\370', '\374', '\376', '\377', '\377', '\177', '\077', '\037', '\017', '\007', '\003', '\001',
'\377', '\377', '\300', '\300', '\300', '\300', '\300', '\300', '\377', '\377', '\000', '\000', '\000', '\000', '\000', '\000',
'\377', '\377', '\003', '\003', '\003', '\003', '\003', '\003', '\300', '\300', '\300', '\300', '\300', '\300', '\300', '\300',
'\003', '\003', '\003', '\003', '\003', '\003', '\003', '\003', '\300', '\300', '\300', '\300', '\300', '\300', '\377', '\377',
'\000', '\000', '\000', '\000', '\000', '\000', '\377', '\377', '\003', '\003', '\003', '\003', '\003', '\003', '\377', '\377',
'\300', '\300', '\000', '\000', '\000', '\000', '\000', '\000', '\003', '\003', '\000', '\000', '\000', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\000', '\000', '\300', '\300', '\000', '\000', '\000', '\000', '\000', '\000', '\003', '\003',
'\000', '\000', '\000', '\125', '\000', '\000', '\000', '\000', '\000', '\374', '\374', '\374', '\374', '\374', '\374', '\000',
'\000', '\176', '\176', '\176', '\176', '\176', '\176', '\000', '\000', '\077', '\077', '\077', '\077', '\077', '\077', '\000',
'\000', '\037', '\037', '\037', '\037', '\037', '\037', '\000', '\000', '\017', '\017', '\017', '\017', '\017', '\017', '\000',
'\000', '\007', '\007', '\007', '\007', '\007', '\007', '\000', '\000', '\003', '\003', '\003', '\003', '\003', '\003', '\000',
'\000', '\001', '\001', '\001', '\001', '\001', '\001', '\000', '\000', '\200', '\200', '\200', '\200', '\200', '\200', '\000',
'\000', '\300', '\300', '\300', '\300', '\300', '\300', '\000', '\000', '\340', '\340', '\340', '\340', '\340', '\340', '\000',
'\000', '\360', '\360', '\360', '\360', '\360', '\360', '\000', '\000', '\370', '\370', '\370', '\370', '\370', '\370', '\000',
'\376', '\376', '\376', '\376', '\376', '\376', '\376', '\376', '\377', '\377', '\000', '\030', '\074', '\176', '\377', '\000',
'\377', '\377', '\000', '\000', '\000', '\000', '\030', '\030', '\377', '\377', '\000', '\030', '\074', '\176', '\377', '\030',
'\377', '\377', '\000', '\102', '\146', '\132', '\102', '\102', '\000', '\000', '\000', '\030', '\030', '\000', '\000', '\000',
'\000', '\300', '\300', '\300', '\300', '\300', '\300', '\300', '\000', '\330', '\330', '\330', '\330', '\330', '\330', '\330',
'\000', '\333', '\333', '\333', '\333', '\333', '\333', '\333', '\000', '\140', '\140', '\140', '\140', '\140', '\140', '\140',
'\000', '\154', '\154', '\154', '\154', '\154', '\154', '\154', '\000', '\155', '\155', '\155', '\155', '\155', '\155', '\155',
'\000', '\200', '\200', '\200', '\200', '\200', '\200', '\200', '\000', '\260', '\260', '\260', '\260', '\260', '\260', '\260',
'\000', '\266', '\266', '\266', '\266', '\266', '\266', '\266', '\000', '\000', '\030', '\074', '\074', '\030', '\000', '\000',
'\000', '\000', '\000', '\146', '\000', '\000', '\000', '\000', '\000', '\036', '\041', '\100', '\000', '\000', '\000', '\000',
'\000', '\000', '\000', '\202', '\104', '\070', '\000', '\000', '\000', '\076', '\042', '\042', '\042', '\042', '\143', '\000',
'\000', '\076', '\042', '\042', '\042', '\042', '\343', '\000', '\000', '\060', '\054', '\043', '\040', '\040', '\040', '\000',
'\000', '\004', '\004', '\004', '\304', '\064', '\014', '\000', '\000', '\006', '\004', '\004', '\004', '\004', '\006', '\000',
'\000', '\300', '\100', '\100', '\100', '\100', '\300', '\000', '\000', '\000', '\000', '\030', '\030', '\000', '\000', '\000',
'\000', '\000', '\030', '\074', '\074', '\030', '\000', '\000', '\000', '\000', '\030', '\074', '\074', '\030', '\000', '\000',
'\000', '\000', '\074', '\074', '\074', '\074', '\000', '\000', '\000', '\000', '\074', '\074', '\074', '\074', '\000', '\000',
'\000', '\030', '\074', '\176', '\176', '\074', '\030', '\000', '\000', '\030', '\074', '\176', '\176', '\074', '\030', '\000',
'\000', '\074', '\176', '\176', '\176', '\176', '\074', '\000', '\000', '\074', '\176', '\176', '\176', '\176', '\074', '\000',
'\066', '\066', '\367', '\000', '\377', '\000', '\000', '\000', '\000', '\000', '\377', '\000', '\367', '\066', '\066', '\066',
'\066', '\066', '\067', '\060', '\067', '\066', '\066', '\066', '\000', '\000', '\377', '\000', '\377', '\000', '\000', '\000',
'\066', '\066', '\367', '\000', '\367', '\066', '\066', '\066', '\030', '\030', '\377', '\000', '\377', '\000', '\000', '\000',
'\066', '\066', '\066', '\066', '\377', '\000', '\000', '\000', '\000', '\000', '\377', '\000', '\377', '\030', '\030', '\030',
'\000', '\000', '\000', '\000', '\377', '\066', '\066', '\066', '\066', '\066', '\066', '\066', '\077', '\000', '\000', '\000',
'\030', '\030', '\037', '\030', '\037', '\000', '\000', '\000', '\000', '\000', '\037', '\030', '\037', '\030', '\030', '\030',
'\000', '\000', '\000', '\000', '\077', '\066', '\066', '\066', '\066', '\066', '\066', '\066', '\377', '\066', '\066', '\066',
'\030', '\030', '\377', '\030', '\377', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\370', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\037', '\030', '\030', '\030', '\377', '\377', '\377', '\377', '\377', '\377', '\377', '\377',
'\000', '\000', '\000', '\000', '\377', '\377', '\377', '\377', '\360', '\360', '\360', '\360', '\360', '\360', '\360', '\360',
'\017', '\017', '\017', '\017', '\017', '\017', '\017', '\017', '\377', '\377', '\377', '\377', '\000', '\000', '\000', '\000',
'\000', '\000', '\166', '\334', '\310', '\334', '\166', '\000', '\000', '\170', '\314', '\370', '\314', '\370', '\300', '\300',
'\000', '\374', '\314', '\300', '\300', '\300', '\300', '\000', '\000', '\376', '\154', '\154', '\154', '\154', '\154', '\000',
'\374', '\314', '\140', '\060', '\140', '\314', '\374', '\000', '\000', '\000', '\176', '\330', '\330', '\330', '\160', '\000',
'\000', '\146', '\146', '\146', '\146', '\174', '\140', '\300', '\000', '\166', '\334', '\030', '\030', '\030', '\030', '\000',
'\374', '\060', '\170', '\314', '\314', '\170', '\060', '\374', '\070', '\154', '\306', '\376', '\306', '\154', '\070', '\000',
'\070', '\154', '\306', '\306', '\154', '\154', '\356', '\000', '\034', '\060', '\030', '\174', '\314', '\314', '\170', '\000',
'\000', '\000', '\176', '\333', '\333', '\176', '\000', '\000', '\006', '\014', '\176', '\333', '\333', '\176', '\140', '\300',
'\070', '\140', '\300', '\370', '\300', '\140', '\070', '\000', '\170', '\314', '\314', '\314', '\314', '\314', '\314', '\000',
'\000', '\374', '\000', '\374', '\000', '\374', '\000', '\000', '\060', '\060', '\374', '\060', '\060', '\000', '\374', '\000',
'\140', '\060', '\030', '\060', '\140', '\000', '\374', '\000', '\030', '\060', '\140', '\060', '\030', '\000', '\374', '\000',
'\016', '\033', '\033', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\330', '\330', '\160',
'\060', '\060', '\000', '\374', '\000', '\060', '\060', '\000', '\000', '\166', '\334', '\000', '\166', '\334', '\000', '\000',
'\070', '\154', '\154', '\070', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\030', '\030', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\030', '\000', '\000', '\000', '\017', '\014', '\014', '\014', '\354', '\154', '\074', '\034',
'\170', '\154', '\154', '\154', '\154', '\000', '\000', '\000', '\160', '\030', '\060', '\140', '\170', '\000', '\000', '\000',
'\000', '\000', '\074', '\074', '\074', '\074', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',

};
static unsigned const char font_default_upper_alt[] = {
'\170', '\314', '\300', '\314', '\170', '\030', '\014', '\170', '\000', '\314', '\000', '\314', '\314', '\314', '\176', '\000',
'\034', '\000', '\170', '\314', '\374', '\300', '\170', '\000', '\176', '\303', '\074', '\006', '\076', '\146', '\077', '\000',
'\314', '\000', '\170', '\014', '\174', '\314', '\176', '\000', '\340', '\000', '\170', '\014', '\174', '\314', '\176', '\000',
'\060', '\060', '\170', '\014', '\174', '\314', '\176', '\000', '\000', '\000', '\170', '\300', '\300', '\170', '\014', '\070',
'\176', '\303', '\074', '\146', '\176', '\140', '\074', '\000', '\314', '\000', '\170', '\314', '\374', '\300', '\170', '\000',
'\340', '\000', '\170', '\314', '\374', '\300', '\170', '\000', '\314', '\000', '\160', '\060', '\060', '\060', '\170', '\000',
'\174', '\306', '\070', '\030', '\030', '\030', '\074', '\000', '\340', '\000', '\160', '\060', '\060', '\060', '\170', '\000',
'\306', '\070', '\154', '\306', '\376', '\306', '\306', '\000', '\060', '\060', '\000', '\170', '\314', '\374', '\314', '\000',
'\034', '\000', '\374', '\140', '\170', '\140', '\374', '\000', '\000', '\000', '\177', '\014', '\177', '\314', '\177', '\000',
'\076', '\154', '\314', '\376', '\314', '\314', '\316', '\000', '\170', '\314', '\000', '\170', '\314', '\314', '\170', '\000',
'\000', '\314', '\000', '\170', '\314', '\314', '\170', '\000', '\000', '\340', '\000', '\170', '\314', '\314', '\170', '\000',
'\170', '\314', '\000', '\314', '\314', '\314', '\176', '\000', '\000', '\340', '\000', '\314', '\314', '\314', '\176', '\000',
'\000', '\314', '\000', '\314', '\314', '\174', '\014', '\370', '\303', '\030', '\074', '\146', '\146', '\074', '\030', '\000',
'\314', '\000', '\314', '\314', '\314', '\314', '\170', '\000', '\030', '\030', '\176', '\300', '\300', '\176', '\030', '\030',
'\070', '\154', '\144', '\360', '\140', '\346', '\374', '\000', '\314', '\314', '\170', '\374', '\060', '\374', '\060', '\060',
'\370', '\314', '\314', '\372', '\306', '\317', '\306', '\307', '\016', '\033', '\030', '\074', '\030', '\030', '\330', '\160',
'\034', '\000', '\170', '\014', '\174', '\314', '\176', '\000', '\070', '\000', '\160', '\060', '\060', '\060', '\170', '\000',
'\000', '\034', '\000', '\170', '\314', '\314', '\170', '\000', '\000', '\034', '\000', '\314', '\314', '\314', '\176', '\000',
'\000', '\370', '\000', '\370', '\314', '\314', '\314', '\000', '\374', '\000', '\314', '\354', '\374', '\334', '\314', '\000',
'\074', '\154', '\154', '\076', '\000', '\176', '\000', '\000', '\070', '\154', '\154', '\070', '\000', '\174', '\000', '\000',
'\060', '\000', '\060', '\140', '\300', '\314', '\170', '\000', '\000', '\000', '\000', '\374', '\300', '\300', '\000', '\000',
'\000', '\000', '\000', '\374', '\014', '\014', '\000', '\000', '\303', '\306', '\314', '\336', '\063', '\146', '\314', '\017',
'\303', '\306', '\314', '\333', '\067', '\157', '\317', '\003', '\030', '\030', '\000', '\030', '\030', '\030', '\030', '\000',
'\000', '\063', '\146', '\314', '\146', '\063', '\000', '\000', '\000', '\314', '\146', '\063', '\146', '\314', '\000', '\000',
'\042', '\210', '\042', '\210', '\042', '\210', '\042', '\210', '\125', '\252', '\125', '\252', '\125', '\252', '\125', '\252',
'\333', '\167', '\333', '\356', '\333', '\167', '\333', '\356', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030',
'\030', '\030', '\030', '\030', '\370', '\030', '\030', '\030', '\030', '\030', '\370', '\030', '\370', '\030', '\030', '\030',
'\066', '\066', '\066', '\066', '\366', '\066', '\066', '\066', '\000', '\000', '\000', '\000', '\376', '\066', '\066', '\066',
'\000', '\000', '\370', '\030', '\370', '\030', '\030', '\030', '\066', '\066', '\366', '\006', '\366', '\066', '\066', '\066',
'\066', '\066', '\066', '\066', '\066', '\066', '\066', '\066', '\000', '\000', '\376', '\006', '\366', '\066', '\066', '\066',
'\066', '\066', '\366', '\006', '\376', '\000', '\000', '\000', '\066', '\066', '\066', '\066', '\376', '\000', '\000', '\000',
'\030', '\030', '\370', '\030', '\370', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\370', '\030', '\030', '\030',
'\030', '\030', '\030', '\030', '\037', '\000', '\000', '\000', '\030', '\030', '\030', '\030', '\377', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\377', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\037', '\030', '\030', '\030',
'\000', '\000', '\000', '\000', '\377', '\000', '\000', '\000', '\030', '\030', '\030', '\030', '\377', '\030', '\030', '\030',
'\030', '\030', '\037', '\030', '\037', '\030', '\030', '\030', '\066', '\066', '\066', '\066', '\067', '\066', '\066', '\066',
'\066', '\066', '\067', '\060', '\077', '\000', '\000', '\000', '\000', '\000', '\077', '\060', '\067', '\066', '\066', '\066',
'\066', '\066', '\367', '\000', '\377', '\000', '\000', '\000', '\000', '\000', '\377', '\000', '\367', '\066', '\066', '\066',
'\066', '\066', '\067', '\060', '\067', '\066', '\066', '\066', '\000', '\000', '\377', '\000', '\377', '\000', '\000', '\000',
'\066', '\066', '\367', '\000', '\367', '\066', '\066', '\066', '\030', '\030', '\377', '\000', '\377', '\000', '\000', '\000',
'\066', '\066', '\066', '\066', '\377', '\000', '\000', '\000', '\000', '\000', '\377', '\000', '\377', '\030', '\030', '\030',
'\000', '\000', '\000', '\000', '\377', '\066', '\066', '\066', '\066', '\066', '\066', '\066', '\077', '\000', '\000', '\000',
'\030', '\030', '\037', '\030', '\037', '\000', '\000', '\000', '\000', '\000', '\037', '\030', '\037', '\030', '\030', '\030',
'\000', '\000', '\000', '\000', '\077', '\066', '\066', '\066', '\066', '\066', '\066', '\066', '\377', '\066', '\066', '\066',
'\030', '\030', '\377', '\030', '\377', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\370', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\037', '\030', '\030', '\030', '\377', '\377', '\377', '\377', '\377', '\377', '\377', '\377',
'\000', '\000', '\000', '\000', '\377', '\377', '\377', '\377', '\360', '\360', '\360', '\360', '\360', '\360', '\360', '\360',
'\017', '\017', '\017', '\017', '\017', '\017', '\017', '\017', '\377', '\377', '\377', '\377', '\000', '\000', '\000', '\000',
'\000', '\000', '\166', '\334', '\310', '\334', '\166', '\000', '\000', '\170', '\314', '\370', '\314', '\370', '\300', '\300',
'\000', '\374', '\314', '\300', '\300', '\300', '\300', '\000', '\000', '\376', '\154', '\154', '\154', '\154', '\154', '\000',
'\374', '\314', '\140', '\060', '\140', '\314', '\374', '\000', '\000', '\000', '\176', '\330', '\330', '\330', '\160', '\000',
'\000', '\146', '\146', '\146', '\146', '\174', '\140', '\300', '\000', '\166', '\334', '\030', '\030', '\030', '\030', '\000',
'\374', '\060', '\170', '\314', '\314', '\170', '\060', '\374', '\070', '\154', '\306', '\376', '\306', '\154', '\070', '\000',
'\070', '\154', '\306', '\306', '\154', '\154', '\356', '\000', '\034', '\060', '\030', '\174', '\314', '\314', '\170', '\000',
'\000', '\000', '\176', '\333', '\333', '\176', '\000', '\000', '\006', '\014', '\176', '\333', '\333', '\176', '\140', '\300',
'\070', '\140', '\300', '\370', '\300', '\140', '\070', '\000', '\170', '\314', '\314', '\314', '\314', '\314', '\314', '\000',
'\000', '\374', '\000', '\374', '\000', '\374', '\000', '\000', '\060', '\060', '\374', '\060', '\060', '\000', '\374', '\000',
'\140', '\060', '\030', '\060', '\140', '\000', '\374', '\000', '\030', '\060', '\140', '\060', '\030', '\000', '\374', '\000',
'\016', '\033', '\033', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\030', '\330', '\330', '\160',
'\060', '\060', '\000', '\374', '\000', '\060', '\060', '\000', '\000', '\166', '\334', '\000', '\166', '\334', '\000', '\000',
'\070', '\154', '\154', '\070', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\030', '\030', '\000', '\000', '\000',
'\000', '\000', '\000', '\000', '\030', '\000', '\000', '\000', '\017', '\014', '\014', '\014', '\354', '\154', '\074', '\034',
'\170', '\154', '\154', '\154', '\154', '\000', '\000', '\000', '\160', '\030', '\060', '\140', '\170', '\000', '\000', '\000',
'\000', '\000', '\074', '\074', '\074', '\074', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',

};
static unsigned const char font_half_width[] = {
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\000', '\000', '\000', '\000', '\104', '\104', '\004', '\100', '\252', '\240', '\000', '\000', '\252', '\352', '\352', '\240',
'\106', '\216', '\054', '\100', '\242', '\104', '\110', '\240', '\112', '\112', '\254', '\140', '\104', '\200', '\000', '\000',
'\044', '\104', '\104', '\040', '\204', '\104', '\104', '\200', '\012', '\116', '\112', '\000', '\004', '\116', '\104', '\000',
'\000', '\000', '\004', '\110', '\000', '\016', '\000', '\000', '\000', '\000', '\004', '\100', '\042', '\104', '\110', '\200',
'\112', '\252', '\252', '\100', '\114', '\104', '\104', '\340', '\112', '\044', '\110', '\340', '\302', '\044', '\042', '\300',
'\252', '\256', '\042', '\040', '\350', '\214', '\042', '\300', '\112', '\214', '\252', '\100', '\342', '\042', '\042', '\040',
'\112', '\244', '\252', '\100', '\352', '\256', '\042', '\040', '\004', '\100', '\004', '\100', '\004', '\100', '\004', '\110',
'\002', '\110', '\102', '\000', '\000', '\340', '\340', '\000', '\010', '\102', '\110', '\000', '\302', '\044', '\100', '\100',
'\112', '\256', '\250', '\140', '\112', '\256', '\252', '\240', '\312', '\254', '\252', '\300', '\150', '\210', '\210', '\140',
'\312', '\252', '\252', '\300', '\350', '\214', '\210', '\340', '\350', '\214', '\210', '\200', '\150', '\212', '\252', '\140',
'\252', '\256', '\252', '\240', '\344', '\104', '\104', '\340', '\042', '\042', '\252', '\100', '\252', '\254', '\252', '\240',
'\210', '\210', '\210', '\340', '\256', '\352', '\252', '\240', '\312', '\252', '\252', '\240', '\352', '\252', '\252', '\340',
'\312', '\254', '\210', '\200', '\112', '\252', '\354', '\140', '\312', '\254', '\252', '\240', '\112', '\204', '\052', '\100',
'\344', '\104', '\104', '\100', '\252', '\252', '\252', '\340', '\252', '\252', '\244', '\100', '\252', '\252', '\356', '\240',
'\252', '\344', '\352', '\240', '\252', '\244', '\104', '\100', '\342', '\044', '\210', '\340', '\144', '\104', '\104', '\140',
'\210', '\104', '\102', '\040', '\304', '\104', '\104', '\300', '\004', '\252', '\000', '\000', '\000', '\000', '\000', '\016',
'\104', '\040', '\000', '\000', '\000', '\102', '\152', '\140', '\210', '\214', '\252', '\300', '\000', '\112', '\212', '\100',
'\042', '\046', '\252', '\140', '\000', '\112', '\310', '\140', '\112', '\214', '\210', '\200', '\000', '\152', '\246', '\054',
'\210', '\214', '\252', '\240', '\100', '\304', '\104', '\340', '\040', '\142', '\042', '\244', '\210', '\252', '\312', '\240',
'\104', '\104', '\104', '\100', '\000', '\256', '\352', '\240', '\000', '\312', '\252', '\240', '\000', '\112', '\252', '\100',
'\000', '\312', '\254', '\210', '\000', '\152', '\246', '\042', '\000', '\352', '\210', '\200', '\000', '\150', '\102', '\300',
'\104', '\344', '\104', '\040', '\000', '\252', '\252', '\140', '\000', '\252', '\244', '\100', '\000', '\252', '\356', '\240',
'\000', '\252', '\112', '\240', '\000', '\252', '\246', '\054', '\000', '\342', '\110', '\340', '\044', '\114', '\104', '\040',
'\104', '\104', '\104', '\100', '\204', '\106', '\104', '\200', '\056', '\200', '\000', '\000', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\000', '\360', '\360', '\000', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',
'\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245', '\245',

};
