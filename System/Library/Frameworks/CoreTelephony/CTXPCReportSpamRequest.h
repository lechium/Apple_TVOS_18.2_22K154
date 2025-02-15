//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestination, CTLazuliOperationID, CTLazuliSpamReportInformation;

__attribute__((visibility("hidden")))
@interface CTXPCReportSpamRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x006000000006cc24
+ (id)allowedClassesForArguments;	// IMP=0x006000000006cb07
- (int)requiredEntitlement;	// IMP=0x000000000006cafc
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c916
@property(readonly, nonatomic) CTLazuliOperationID *operationID;
@property(readonly, nonatomic) CTLazuliSpamReportInformation *spamReportInfo;
@property(readonly, nonatomic) CTLazuliDestination *destination;
- (id)initWithContext:(id)arg1 destination:(id)arg2 spamReportInfo:(id)arg3 operationID:(id)arg4;	// IMP=0x000000000006c4c3

@end

