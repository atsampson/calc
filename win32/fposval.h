/*
 * DO NOT EDIT -- generated by the Makefile
 */


#if !defined(__FPOSVAL_H__)
#define __FPOSVAL_H__


/* what are our file position & size types? */
#undef FILEPOS_BITS
#define FILEPOS_BITS 64
#define SWAP_HALF_IN_FILEPOS(dest, src)		(*(dest) = *(src))

#undef OFF_T_BITS
#define OFF_T_BITS 32
#define SWAP_HALF_IN_OFF_T(dest, src)		(*(dest) = *(src))

#undef DEV_BITS
#define DEV_BITS 32
#define SWAP_HALF_IN_DEV(dest, src)	memcpy((void *)(dest), (void *)(src), 4)

#undef INODE_BITS
#define INODE_BITS 16
#define SWAP_HALF_IN_INODE(dest, src)	memcpy((void *)(dest), (void *)(src), 2)


#endif /* !__FPOSVAL_H__ */