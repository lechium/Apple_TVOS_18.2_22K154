//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@protocol AFConversationStorable <NSObject>
- (AFDataStore *)associatedDataStore;
- (_Bool)isPersistentAcrossInvocations;
- (_Bool)isImmersiveExperience;
- (_Bool)isSupplemental;
- (_Bool)isTransient;
- (_Bool)isVirgin;
- (long long)presentationState;
- (NSString *)aceCommandIdentifier;
- (AFDialogPhase *)dialogPhase;
- (AceObject *)aceObject;
- (NSUUID *)revisionIdentifier;
- (long long)type;
- (NSUUID *)identifier;
@end

