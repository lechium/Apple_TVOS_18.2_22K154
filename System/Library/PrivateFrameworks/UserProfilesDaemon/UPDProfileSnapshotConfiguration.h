//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UPDProfileSnapshotConfiguration : NSObject
{
    _Bool _includeUnavailableProfiles;	// 8 = 0x8
    _Bool _includeProfileTombstones;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool includeProfileTombstones; // @synthesize includeProfileTombstones=_includeProfileTombstones;
@property(readonly, nonatomic) _Bool includeUnavailableProfiles; // @synthesize includeUnavailableProfiles=_includeUnavailableProfiles;
- (id)initWithIncludeUnavailableProfiles:(_Bool)arg1 includeProfileTombstones:(_Bool)arg2;	// IMP=0x00000000000505be
- (id)initWithFetchProfileStoreSnapshotRequestOptions:(unsigned long long)arg1;	// IMP=0x0000000000050566
- (id)initWithUpdateProfileStoreRequestOptions:(unsigned long long)arg1;	// IMP=0x000000000005050a

@end

