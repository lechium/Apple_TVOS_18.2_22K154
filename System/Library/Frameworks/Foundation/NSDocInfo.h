//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSDocInfo : NSObject
{
    long long time;	// 8 = 0x8
    unsigned short mode;	// 16 = 0x10
    struct {
        unsigned int isDir:1;
        unsigned int isSingleFile:1;
        unsigned int isSoftLink:1;
        unsigned int _pad:13;
    } flags;	// 18 = 0x12
}

- (id)copy;	// IMP=0x00000000008ecfb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ecfad
- (id)initWithFileAttributes:(id)arg1;	// IMP=0x00000000008ecf39
- (void)setFileAttributes:(id)arg1;	// IMP=0x00000000008ece56
- (id)initFromInfo:(struct stat *)arg1;	// IMP=0x00000000008ecdc3

@end

