//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBSelectionItem <NSObject>
@property(readonly, nonatomic) _Bool hasVocabularyValue;
@property(copy, nonatomic) NSString *vocabularyValue;
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _INPBIntentSlotValue *value;
@property(readonly, nonatomic) _Bool hasUuid;
@property(copy, nonatomic) NSString *uuid;
@end

