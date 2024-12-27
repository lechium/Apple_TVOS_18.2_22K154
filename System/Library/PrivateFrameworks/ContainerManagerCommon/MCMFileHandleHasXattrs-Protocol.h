//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

@protocol MCMFileHandleHasXattrs
- (_Bool)removeXattr:(NSString *)arg1 error:(id *)arg2;
- (_Bool)setXattr:(NSString *)arg1 valueAsNumber:(NSNumber *)arg2 error:(id *)arg3;
- (_Bool)setXattr:(NSString *)arg1 valueAsUUID:(NSUUID *)arg2 error:(id *)arg3;
- (_Bool)setXattr:(NSString *)arg1 valueAsString:(NSString *)arg2 error:(id *)arg3;
- (NSNumber *)copyValueAsNumberFromXattr:(NSString *)arg1 error:(id *)arg2;
- (NSUUID *)copyValueAsUUIDFromXattr:(NSString *)arg1 error:(id *)arg2;
- (NSString *)copyValueAsStringFromXattr:(NSString *)arg1 maxLength:(unsigned long long)arg2 error:(id *)arg3;
@end

