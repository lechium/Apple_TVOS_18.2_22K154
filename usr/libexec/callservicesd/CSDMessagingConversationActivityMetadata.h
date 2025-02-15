//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivitySceneAssociationBehavior, NSData, NSString;

@interface CSDMessagingConversationActivityMetadata : PBCodable
{
    NSString *_fallbackURL;	// 8 = 0x8
    NSData *_image;	// 16 = 0x10
    unsigned int _lifetimePolicy;	// 24 = 0x18
    unsigned int _preferredBroadcastingAttributes;	// 28 = 0x1c
    CSDMessagingConversationActivitySceneAssociationBehavior *_sceneAssociationBehavior;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    _Bool _supportsActivityPreviews;	// 56 = 0x38
    _Bool _supportsContinuationOnTV;	// 57 = 0x39
    struct {
        unsigned int lifetimePolicy:1;
        unsigned int preferredBroadcastingAttributes:1;
        unsigned int supportsActivityPreviews:1;
        unsigned int supportsContinuationOnTV:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0020000000181f73
@property(nonatomic) unsigned int lifetimePolicy; // @synthesize lifetimePolicy=_lifetimePolicy;
@property(nonatomic) _Bool supportsActivityPreviews; // @synthesize supportsActivityPreviews=_supportsActivityPreviews;
@property(retain, nonatomic) CSDMessagingConversationActivitySceneAssociationBehavior *sceneAssociationBehavior; // @synthesize sceneAssociationBehavior=_sceneAssociationBehavior;
@property(nonatomic) unsigned int preferredBroadcastingAttributes; // @synthesize preferredBroadcastingAttributes=_preferredBroadcastingAttributes;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool supportsContinuationOnTV; // @synthesize supportsContinuationOnTV=_supportsContinuationOnTV;
@property(retain, nonatomic) NSString *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000181d27
- (unsigned long long)hash;	// IMP=0x0010000000181bdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001819d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000181846
- (void)copyTo:(id)arg1;	// IMP=0x0010000000181709
- (void)writeTo:(id)arg1;	// IMP=0x00100000001815c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001815b8
- (id)dictionaryRepresentation;	// IMP=0x0010000000180eac
- (id)description;	// IMP=0x0010000000180dfd
@property(nonatomic) _Bool hasLifetimePolicy;
@property(nonatomic) _Bool hasSupportsActivityPreviews;
@property(readonly, nonatomic) _Bool hasSceneAssociationBehavior;
@property(nonatomic) _Bool hasPreferredBroadcastingAttributes;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasSupportsContinuationOnTV;
@property(readonly, nonatomic) _Bool hasFallbackURL;

@end

