//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandDataMigration
{
}

+ (Class)incomingMessageClass;	// IMP=0x00800000000879ab
+ (unsigned long long)command;	// IMP=0x008000000008797f
- (_Bool)_performInternalACLMigrationWithError:(id *)arg1;	// IMP=0x000000000008818d
- (_Bool)_performBundleContainerOwnershipMigrationWithError:(id *)arg1;	// IMP=0x0000000000087d03
- (void)execute;	// IMP=0x0000000000087a71
- (_Bool)preflightClientAllowed;	// IMP=0x00000000000879dd

@end

