//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPiTunesMediaAsset, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMovieBundleUnresolvedMetadata : NSObject
{
    NSString *_storeFrontIdentifier;	// 8 = 0x8
    NSString *_storeIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_genre;	// 32 = 0x20
    LPiTunesMediaAsset *_artwork;	// 40 = 0x28
    NSArray *_offers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004c954
@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) LPiTunesMediaAsset *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (id)assetsToFetch;	// IMP=0x000000000004c848
- (id)resolve;	// IMP=0x000000000004c770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

