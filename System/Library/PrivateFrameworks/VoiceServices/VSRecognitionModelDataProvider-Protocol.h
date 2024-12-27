//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol VSRecognitionModelDataProvider <NSObject>
- (long long)valueCountForClassWithIdentifier:(NSString *)arg1 inModelWithIdentifier:(NSString *)arg2;

@optional
- (void)stopReportingChanges;
- (void)beginReportingChanges;
- (_Bool)isCacheValidityIdentifierValid:(NSDictionary *)arg1;
- (NSDictionary *)cacheValidityIdentifier;
- (NSString *)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
- (_Bool)getValue:(id *)arg1 weight:(long long *)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(NSString *)arg4 inModelWithIdentifier:(NSString *)arg5;
- (NSString *)valueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
@end

