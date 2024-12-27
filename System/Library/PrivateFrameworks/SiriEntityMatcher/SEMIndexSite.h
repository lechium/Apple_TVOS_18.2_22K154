//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, UVTransaction;
@protocol OS_dispatch_queue;

@interface SEMIndexSite : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_objectCache;	// 16 = 0x10
    unsigned char _type;	// 24 = 0x18
    _Bool _isUnavailableSoon;	// 25 = 0x19
    int _dataProtectionClass;	// 28 = 0x1c
    NSURL *_indexSiteURL;	// 32 = 0x20
    NSURL *_skitDirectoryURL;	// 40 = 0x28
    NSURL *_ftsDirectoryURL;	// 48 = 0x30
    NSURL *_ftsDatabaseURL;	// 56 = 0x38
    NSString *_personaIdentifier;	// 64 = 0x40
    UVTransaction *_uvTransaction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000300e1
@property(retain, nonatomic) UVTransaction *uvTransaction; // @synthesize uvTransaction=_uvTransaction;
@property(nonatomic) _Bool isUnavailableSoon; // @synthesize isUnavailableSoon=_isUnavailableSoon;
@property(readonly, nonatomic) NSString *personaIdentifier; // @synthesize personaIdentifier=_personaIdentifier;
@property(readonly, nonatomic) NSURL *ftsDatabaseURL; // @synthesize ftsDatabaseURL=_ftsDatabaseURL;
@property(readonly, nonatomic) NSURL *ftsDirectoryURL; // @synthesize ftsDirectoryURL=_ftsDirectoryURL;
@property(readonly, nonatomic) NSURL *skitDirectoryURL; // @synthesize skitDirectoryURL=_skitDirectoryURL;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic) NSURL *indexSiteURL; // @synthesize indexSiteURL=_indexSiteURL;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (id)cachedObjectForKey:(id)arg1 initBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fe6a
- (id)description;	// IMP=0x000000000002fdf6
- (id)init;	// IMP=0x000000000002fdae
- (id)initWithType:(unsigned char)arg1 indexSiteURL:(id)arg2 dataProtectionClass:(int)arg3 personaIdentifier:(id)arg4;	// IMP=0x000000000002fbcc

@end

