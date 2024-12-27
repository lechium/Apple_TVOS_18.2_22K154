//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableDictionary, NSURL, UPDContainerProvider;

__attribute__((visibility("hidden")))
@interface UPDPersistentDataDirectoryProvider : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
    NSMutableDictionary *_containerByPersonaUniqueIdentifier;	// 16 = 0x10
    UPDContainerProvider *_containerProvider;	// 24 = 0x18
    NSURL *_sharedDataDirectoryURL;	// 32 = 0x20
    NSURL *_sharedCachesDirectoryURL;	// 40 = 0x28
}

+ (id)provider;	// IMP=0x001000000002c8a3
- (void).cxx_destruct;	// IMP=0x000000000002d7f3
@property(readonly, nonatomic) NSURL *sharedCachesDirectoryURL; // @synthesize sharedCachesDirectoryURL=_sharedCachesDirectoryURL;
@property(readonly, nonatomic) NSURL *sharedDataDirectoryURL; // @synthesize sharedDataDirectoryURL=_sharedDataDirectoryURL;
- (void)_removeProfileDataDirectory:(id)arg1 personUniqueIdentifier:(id)arg2;	// IMP=0x000000000002d5b9
- (id)_profileDataDirectoryURLWithContainer:(id)arg1;	// IMP=0x000000000002d4c5
- (id)_containerForPersonUniqueIdentifier:(id)arg1;	// IMP=0x000000000002d3f6
- (id)description;	// IMP=0x000000000002d337
- (void)removeProfileDataDirectoryForPersonUniqueIdentifier:(id)arg1;	// IMP=0x000000000002d0dd
- (id)profileDataDirectoryURLForPersonUniqueIdentifier:(id)arg1;	// IMP=0x000000000002cebb
- (void)dealloc;	// IMP=0x000000000002ce47
- (id)initWithFileManager:(id)arg1 sharedDataDirectoryURL:(id)arg2 sharedCachesDirectoryURL:(id)arg3;	// IMP=0x000000000002c9ba

@end

