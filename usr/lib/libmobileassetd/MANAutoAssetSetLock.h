//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, NSDictionary, NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetLock : NSObject
{
    _Bool _inhibitedFromEmergencyRemoval;	// 8 = 0x8
    MAAutoAssetSelector *_fullAssetSelector;	// 16 = 0x10
    NSURL *_localContentURL;	// 24 = 0x18
    NSDictionary *_assetAttributes;	// 32 = 0x20
    NSMutableDictionary *_lockReasons;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ae657
- (void).cxx_destruct;	// IMP=0x00000000000ae859
@property(retain, nonatomic) NSMutableDictionary *lockReasons; // @synthesize lockReasons=_lockReasons;
@property(nonatomic) _Bool inhibitedFromEmergencyRemoval; // @synthesize inhibitedFromEmergencyRemoval=_inhibitedFromEmergencyRemoval;
@property(readonly, retain, nonatomic) NSDictionary *assetAttributes; // @synthesize assetAttributes=_assetAttributes;
@property(readonly, retain, nonatomic) NSURL *localContentURL; // @synthesize localContentURL=_localContentURL;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector; // @synthesize fullAssetSelector=_fullAssetSelector;
- (id)summary;	// IMP=0x00000000000ae671
- (id)description;	// IMP=0x00000000000ae65f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae54f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae327
- (id)initForSelector:(id)arg1 withLocalContentURL:(id)arg2 withAssetAttributes:(id)arg3;	// IMP=0x00000000000ae250

@end

