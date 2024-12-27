//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, RestoreDownloadItem;

@interface DemotedApplication : NSObject
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSNumber *_downloaderIdentifier;	// 16 = 0x10
    NSNumber *_externalVersionIdentifier;	// 24 = 0x18
    NSNumber *_familyIdentifier;	// 32 = 0x20
    NSNumber *_itemIdentifier;	// 40 = 0x28
    NSNumber *_purchaserIdentifier;	// 48 = 0x30
    NSNumber *_storeFrontIdentifier;	// 56 = 0x38
    NSString *_vendorIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000313fe
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(copy, nonatomic) NSNumber *purchaserIdentifier; // @synthesize purchaserIdentifier=_purchaserIdentifier;
@property(copy, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSNumber *familyIdentifier; // @synthesize familyIdentifier=_familyIdentifier;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSNumber *downloaderIdentifier; // @synthesize downloaderIdentifier=_downloaderIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000031264
@property(readonly, nonatomic) RestoreDownloadItem *restoreDownloadItem;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000030ce7
- (id)initWithApplication:(id)arg1;	// IMP=0x0010000000030b56

@end

