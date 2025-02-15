//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;
@protocol SHCustomCatalogStorage;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogMemoryContainer : NSObject
{
    id <SHCustomCatalogStorage> _container;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000882c
@property(readonly, nonatomic) id <SHCustomCatalogStorage> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSData *dataRepresentation;
@property(readonly, nonatomic) NSArray *referenceSignatures;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008740
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;	// IMP=0x00000000000086e1
- (id)mediaItemsForReferenceSignature:(id)arg1;	// IMP=0x0000000000008667
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008657
- (_Bool)loadFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000854d
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;	// IMP=0x00000000000084c2
- (id)init;	// IMP=0x000000000000846c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

