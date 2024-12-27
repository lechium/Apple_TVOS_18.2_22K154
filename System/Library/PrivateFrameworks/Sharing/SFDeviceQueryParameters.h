//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAssetQuery, NSString;

__attribute__((visibility("hidden")))
@interface SFDeviceQueryParameters : NSObject
{
    _Bool _installedOnly;	// 8 = 0x8
    _Bool _imperfectMatch;	// 9 = 0x9
    _Bool _fallback;	// 10 = 0xa
    MAAssetQuery *_maQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007038e
@property(readonly, nonatomic) _Bool fallback; // @synthesize fallback=_fallback;
@property(readonly, nonatomic) _Bool imperfectMatch; // @synthesize imperfectMatch=_imperfectMatch;
@property(readonly, nonatomic) _Bool installedOnly; // @synthesize installedOnly=_installedOnly;
@property(readonly, nonatomic) MAAssetQuery *maQuery; // @synthesize maQuery=_maQuery;
@property(readonly, nonatomic) NSString *queryType;
- (unsigned long long)hash;	// IMP=0x00000000000702bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070107
- (id)description;	// IMP=0x000000000006ffd7
- (id)maAssetQueryDescription;	// IMP=0x000000000006fe33
- (id)initWithDeviceAssetQuery:(id)arg1 installedOnly:(_Bool)arg2 imperfectMatch:(_Bool)arg3 fallback:(_Bool)arg4;	// IMP=0x000000000006fcf0

@end

