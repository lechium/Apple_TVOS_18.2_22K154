//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBURLValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasScope;
@property(copy, nonatomic) NSData *scope;
@property(readonly, nonatomic) _Bool hasAbsoluteString;
@property(copy, nonatomic) NSString *absoluteString;
@end

