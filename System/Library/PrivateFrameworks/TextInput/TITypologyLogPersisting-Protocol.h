//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableString, NSString, NSURL, TITypologyLog;

@protocol TITypologyLogPersisting
+ (NSURL *)typologyLogURLFromTraceLogURL:(NSURL *)arg1;
+ (NSURL *)traceLogURLFromTypologyLogURL:(NSURL *)arg1;
+ (NSString *)typologyLogFilenameFromTraceLogFilename:(NSString *)arg1;
+ (NSString *)traceLogFilenameFromTypologyLogFilename:(NSString *)arg1;
+ (_Bool)isTraceLogFilename:(NSString *)arg1;
+ (_Bool)isTypologyLogFilename:(NSString *)arg1;
+ (TITypologyLog *)typologyLogFromTypologyLogFile:(NSURL *)arg1 andTraceLogFile:(NSURL *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *recommendedTraceLogFilename;
@property(readonly, nonatomic) NSString *recommendedTypologyLogFilename;
@property(readonly, nonatomic) unsigned long long traceLogVersion;
@property(readonly, nonatomic) unsigned long long typologyLogVersion;
- (NSString *)filename;
- (NSMutableString *)trace;
- (NSDictionary *)propertyListWithTrace;
- (NSDictionary *)propertyList;
- (_Bool)writeToTypologyLogFile:(NSURL *)arg1 andTraceLogFile:(NSURL *)arg2 withAccessibilityInfo:(NSDictionary *)arg3 error:(id *)arg4;
@end

