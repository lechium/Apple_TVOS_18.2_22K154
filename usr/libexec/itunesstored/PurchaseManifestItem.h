//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface PurchaseManifestItem : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

@property(readonly, nonatomic) NSDictionary *manifestItemDictionary; // @synthesize manifestItemDictionary=_dictionary;
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000f88d
@property(copy, nonatomic) NSString *relativeMetadataPath;
@property(copy, nonatomic) NSString *relativeMediaAssetPath;
@property(copy, nonatomic) NSString *relativeFeedAssetPath;
@property(copy, nonatomic) NSString *relativeArtworkPath;
@property(copy, nonatomic) NSNumber *libraryPersistentIdentifier;
- (void)dealloc;	// IMP=0x001000000000f744
- (id)initWithManifestItemDictionary:(id)arg1;	// IMP=0x001000000000f6ed
- (id)init;	// IMP=0x001000000000f6a1

@end

