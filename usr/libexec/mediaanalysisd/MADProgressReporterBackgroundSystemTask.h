//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MADProgressReporterBackgroundSystemTask
{
}

+ (double)expectedDuration;	// IMP=0x0040000000148ef5
+ (_Bool)resourceIntensive;	// IMP=0x0010000000148eed
+ (_Bool)externalPowerRequired;	// IMP=0x0010000000148ee5
+ (unsigned long long)taskID;	// IMP=0x0010000000148eda
+ (id)identifier;	// IMP=0x0010000000148ecd
+ (id)sharedTask;	// IMP=0x0010000000148e40
- (void)executeWithSystemTask:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000148f03

@end

