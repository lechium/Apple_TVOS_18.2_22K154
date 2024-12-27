//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicKit/NSObject-Protocol.h>

@class MusicKit_SoftLinking_CatalogID, MusicKit_SoftLinking_DeviceLocalID, MusicKit_SoftLinking_MPModelKind, NSArray, NSData, NSString;
@protocol MusicKit_SoftLinking_MPIdentifierSet;

@protocol MusicKit_SoftLinking_MPIdentifierSet <NSObject>
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_MPModelKind *musicKit_modelKind;
@property(readonly, copy, nonatomic) NSArray *musicKit_identifierSetSources;
@property(readonly, nonatomic) _Bool musicKit_hasValidIdentifier;
@property(readonly, copy, nonatomic) NSArray *musicKit_formerIDs;
@property(readonly, copy, nonatomic) NSString *musicKit_playbackID;
@property(readonly, nonatomic) long long musicKit_syncID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_containedDeviceLocalID;
@property(readonly, copy, nonatomic) NSString *musicKit_occurrenceID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_deviceLocalID;
@property(readonly, nonatomic) long long musicKit_assetAdamID;
@property(readonly, nonatomic) long long musicKit_purchasedAdamID;
@property(readonly, nonatomic) long long musicKit_reportingAdamID;
@property(readonly, nonatomic) long long musicKit_cloudID;
@property(readonly, copy, nonatomic) NSString *musicKit_cloudAlbumLibraryID;
@property(readonly, copy, nonatomic) NSString *musicKit_libraryID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_CatalogID *musicKit_catalogID;
- (NSData *)archivedDataWithError:(id *)arg1;
- (id <MusicKit_SoftLinking_MPIdentifierSet>)unionSet:(id <MusicKit_SoftLinking_MPIdentifierSet>)arg1;
- (_Bool)intersectsSet:(id <MusicKit_SoftLinking_MPIdentifierSet>)arg1;
@end

