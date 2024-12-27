//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaRemoteController, NSString;

__attribute__((visibility("hidden")))
@interface MPCMRRemoteArtworkDataSource : NSObject
{
    MPCMediaRemoteController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003305f9
@property(readonly, nonatomic) __weak MPCMediaRemoteController *controller; // @synthesize controller=_controller;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003303c4
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000003302fd
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000330264
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000003301b5
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000003300ed
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x000000000033004a
- (id)initWithController:(id)arg1;	// IMP=0x000000000032ffe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

