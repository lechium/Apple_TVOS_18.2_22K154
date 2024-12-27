//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MPCMRContentItemRemoteArtworkToken : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_artworkIdentifier;	// 16 = 0x10
    NSArray *_supportedRemoteArtworkFormats;	// 24 = 0x18
    NSDictionary *_remoteArtworks;	// 32 = 0x20
    MPArtworkCatalog *_storeArtworkCatalog;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000032ff9d
@property(retain, nonatomic) MPArtworkCatalog *storeArtworkCatalog; // @synthesize storeArtworkCatalog=_storeArtworkCatalog;
@property(readonly, nonatomic) NSDictionary *remoteArtworks; // @synthesize remoteArtworks=_remoteArtworks;
@property(readonly, nonatomic) NSArray *supportedRemoteArtworkFormats; // @synthesize supportedRemoteArtworkFormats=_supportedRemoteArtworkFormats;
@property(readonly, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setDestinationScale:(double)arg1;	// IMP=0x000000000032ff0b
- (void)setFittingSize:(struct CGSize)arg1;	// IMP=0x000000000032feb2
- (id)stringRepresentation;	// IMP=0x000000000032fe6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032fe5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032fc3e
- (id)initWithIdentifier:(id)arg1 artworkIdentifier:(id)arg2 supportedRemoteArtworkFormats:(id)arg3 remoteArtworks:(id)arg4;	// IMP=0x000000000032f861

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

