//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@protocol OSLogEventProvider
@property(readonly, nonatomic) CDStruct_0dd72924 lossCount;
@property(readonly, nonatomic) struct timezone *lossEndUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossEndUnixDate;
@property(readonly, nonatomic) unsigned long long lossEndMachContinuousTimestamp;
@property(readonly, nonatomic) struct timezone *lossStartUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossStartUnixDate;
@property(readonly, nonatomic) unsigned long long lossStartMachContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long creatorProcessUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorActivityIdentifier;
@property(readonly, nonatomic) NSString *signpostName;
@property(readonly, nonatomic) unsigned long long signpostScope;
@property(readonly, nonatomic) unsigned long long signpostType;
@property(readonly, nonatomic) unsigned long long signpostIdentifier;
@property(readonly, nonatomic) OSLogEventDecomposedMessage *decomposedMessage;
@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) OSLogEventBacktrace *backtrace;
@property(readonly, nonatomic) unsigned long long senderImageOffset;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) NSString *senderImagePath;
@property(readonly, nonatomic) const char *senderImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *senderImageUUID;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) NSString *processImagePath;
@property(readonly, nonatomic) const char *processImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *processImageUUID;
@property(readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property(readonly, nonatomic) NSUUID *bootUUID;
@property(readonly, nonatomic) unsigned long long transitionActivityIdentifier;
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
@property(readonly, nonatomic) unsigned int processIdentifierVersion;
@property(readonly, nonatomic) unsigned int userIdentifier;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) struct timezone *unixTimeZone;
@property(readonly, nonatomic) struct timeval *unixDate;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) unsigned long long traceIdentifier;
@property(readonly, nonatomic) unsigned long long timeToLive;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long logType;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *composedMessage;
@end

