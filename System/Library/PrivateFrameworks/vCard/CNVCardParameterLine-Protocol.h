//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <vCard/CNVCardLine-Protocol.h>

@class NSString;
@protocol CNVCardLine, CNVCardLineSerialization;

@protocol CNVCardParameterLine <CNVCardLine>
- (void)serializeValueWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (_Bool)canSerializeWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (void)addGroupedLine:(id <CNVCardLine>)arg1 withCounter:(long long *)arg2;
- (void)insertParameterWithName:(NSString *)arg1 value:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)addParameterWithName:(NSString *)arg1 value:(NSString *)arg2;
@end

