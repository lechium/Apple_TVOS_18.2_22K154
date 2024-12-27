//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSOrderedSet, NSSet, NSString, TUCallProvider;

@interface CSDMessagingCallProvider : PBCodable
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _protoSupportedHandleTypes;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_bundleURLString;	// 40 = 0x28
    NSMutableArray *_emergencyHandles;	// 48 = 0x30
    NSMutableArray *_emergencyLabeledHandles;	// 56 = 0x38
    NSMutableArray *_handoffIdentifiers;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    NSString *_localizedName;	// 80 = 0x50
    unsigned int _maximumCallGroups;	// 88 = 0x58
    unsigned int _maximumCallsPerCallGroup;	// 92 = 0x5c
    NSString *_originalRingtoneSoundURLString;	// 96 = 0x60
    NSMutableArray *_prioritizedSenderIdentities;	// 104 = 0x68
    NSString *_ringtoneSoundURLString;	// 112 = 0x70
    _Bool _supportsAudioAndVideo;	// 120 = 0x78
    _Bool _supportsAudioOnly;	// 121 = 0x79
    _Bool _supportsEmergency;	// 122 = 0x7a
    _Bool _supportsRecents;	// 123 = 0x7b
    _Bool _supportsVoicemail;	// 124 = 0x7c
    struct {
        unsigned int maximumCallGroups:1;
        unsigned int maximumCallsPerCallGroup:1;
        unsigned int supportsAudioAndVideo:1;
        unsigned int supportsAudioOnly:1;
        unsigned int supportsEmergency:1;
        unsigned int supportsRecents:1;
        unsigned int supportsVoicemail:1;
    } _has;	// 128 = 0x80
}

+ (Class)emergencyHandlesType;	// IMP=0x00200000000904e3
+ (Class)prioritizedSenderIdentitiesType;	// IMP=0x0010000000090411
+ (Class)emergencyLabeledHandlesType;	// IMP=0x00100000000902f4
+ (Class)handoffIdentifierType;	// IMP=0x00100000000900f4
- (void).cxx_destruct;	// IMP=0x0020000000093721
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id);	// IMP=0x00100000000936fc
@property(retain, nonatomic) NSMutableArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(retain, nonatomic) NSMutableArray *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(nonatomic) _Bool supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(retain, nonatomic) NSMutableArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(retain, nonatomic) NSMutableArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(retain, nonatomic) NSString *originalRingtoneSoundURLString; // @synthesize originalRingtoneSoundURLString=_originalRingtoneSoundURLString;
@property(retain, nonatomic) NSString *ringtoneSoundURLString; // @synthesize ringtoneSoundURLString=_ringtoneSoundURLString;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(nonatomic) unsigned int maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned int maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(retain, nonatomic) NSString *bundleURLString; // @synthesize bundleURLString=_bundleURLString;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000092f34
- (unsigned long long)hash;	// IMP=0x0010000000092cf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000092941
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000921f7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000091d96
- (void)writeTo:(id)arg1;	// IMP=0x00100000000917f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000917e8
- (id)dictionaryRepresentation;	// IMP=0x00100000000905b8
- (id)description;	// IMP=0x0010000000090509
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
- (id)emergencyHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000904c6
- (unsigned long long)emergencyHandlesCount;	// IMP=0x00100000000904a9
- (void)addEmergencyHandles:(id)arg1;	// IMP=0x001000000009043f
- (void)clearEmergencyHandles;	// IMP=0x0010000000090422
- (id)prioritizedSenderIdentitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000903f4
- (unsigned long long)prioritizedSenderIdentitiesCount;	// IMP=0x00100000000903d7
- (void)addPrioritizedSenderIdentities:(id)arg1;	// IMP=0x001000000009036d
- (void)clearPrioritizedSenderIdentities;	// IMP=0x0010000000090350
@property(nonatomic) _Bool hasSupportsRecents;
- (id)emergencyLabeledHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000902d7
- (unsigned long long)emergencyLabeledHandlesCount;	// IMP=0x00100000000902ba
- (void)addEmergencyLabeledHandles:(id)arg1;	// IMP=0x0010000000090250
- (void)clearEmergencyLabeledHandles;	// IMP=0x0010000000090233
- (void)setProtoSupportedHandleTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000009021c
- (unsigned int)protoSupportedHandleTypeAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009014c
- (void)addProtoSupportedHandleType:(unsigned int)arg1;	// IMP=0x0010000000090139
- (void)clearProtoSupportedHandleTypes;	// IMP=0x0010000000090128
@property(readonly, nonatomic) unsigned int *protoSupportedHandleTypes;
@property(readonly, nonatomic) unsigned long long protoSupportedHandleTypesCount;
- (id)handoffIdentifierAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000900d7
- (unsigned long long)handoffIdentifiersCount;	// IMP=0x00100000000900ba
- (void)addHandoffIdentifier:(id)arg1;	// IMP=0x0010000000090050
- (void)clearHandoffIdentifiers;	// IMP=0x0010000000090033
@property(readonly, nonatomic) _Bool hasOriginalRingtoneSoundURLString;
@property(readonly, nonatomic) _Bool hasRingtoneSoundURLString;
@property(nonatomic) _Bool hasSupportsVoicemail;
@property(nonatomic) _Bool hasSupportsEmergency;
@property(nonatomic) _Bool hasSupportsAudioAndVideo;
@property(nonatomic) _Bool hasSupportsAudioOnly;
@property(nonatomic) _Bool hasMaximumCallsPerCallGroup;
@property(nonatomic) _Bool hasMaximumCallGroups;
@property(readonly, nonatomic) _Bool hasBundleURLString;
@property(readonly, nonatomic) _Bool hasLocalizedName;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x001000000008fdd0
@property(copy, nonatomic, setter=setPrioritizedTUSenderIdentities:) NSOrderedSet *prioritizedTUSenderIdentities;
@property(copy, nonatomic) NSArray *emergencyTULabeledHandles;
@property(copy, nonatomic) NSArray *emergencyTUHandles;
@property(copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, copy, nonatomic) TUCallProvider *provider;
- (id)initWithProvider:(id)arg1;	// IMP=0x00100000000bf70f

@end

