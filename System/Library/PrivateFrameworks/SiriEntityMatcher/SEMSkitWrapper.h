//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SEMSkitWrapper : NSObject
{
    NSURL *_skitDirectoryURL;	// 8 = 0x8
    struct path _skitDirectoryPath;	// 16 = 0x10
    struct path _nameTriePath;	// 40 = 0x28
    struct path _aliasTriePath;	// 64 = 0x40
    shared_ptr_16f0ca65 _searcher;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000048eb6
- (void).cxx_destruct;	// IMP=0x0000000000048e41
@property(readonly, nonatomic) shared_ptr_16f0ca65 searcher; // @synthesize searcher=_searcher;
- (id)readInfo;	// IMP=0x0000000000048dff
- (void)teardown;	// IMP=0x0000000000048df9
- (void)boostrap;	// IMP=0x0000000000048c6a
- (id)initWithSkitDirectoryURL:(id)arg1;	// IMP=0x0000000000048af2

@end

