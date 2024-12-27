//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriKitFlow/JSExport-Protocol.h>
#import <SiriKitFlow/NSObject-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *alternativeConversationIdentifier;
@property(copy, nonatomic) NSString *notificationThreadIdentifier;
@property(copy, nonatomic) NSArray *attachments;
@property(nonatomic) long long effect;
@property(copy, nonatomic) INPerson *sender;
@property(copy, nonatomic) NSString *serviceName;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(copy, nonatomic) INSpeakableString *speakableGroupName;
@property(copy, nonatomic) NSString *content;
@property(nonatomic) long long outgoingMessageType;
@property(copy, nonatomic) NSArray *recipients;
- (id)init;
@end

