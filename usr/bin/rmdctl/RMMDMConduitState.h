//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, RMMDMConduitConfig;

@interface RMMDMConduitState
{
}

- (id)reportDetails;	// IMP=0x0020000000013486

// Remaining properties
@property(retain, nonatomic) RMMDMConduitConfig *conduitConfig; // @dynamic conduitConfig;
@property(copy, nonatomic) NSDate *localRetryAfterDate; // @dynamic localRetryAfterDate;
@property(nonatomic) long long numberOfConsecutiveErrors; // @dynamic numberOfConsecutiveErrors;
@property(nonatomic) long long numberOfConsecutiveFailures; // @dynamic numberOfConsecutiveFailures;
@property(copy, nonatomic) NSDate *serverRetryAfterDate; // @dynamic serverRetryAfterDate;

@end

