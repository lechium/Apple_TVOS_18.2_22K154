//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVIdleServices/NSObject-Protocol.h>

@protocol TVISEvolutionService;

@protocol TVISEvolutionServiceDelegate <NSObject>
- (void)needsUpdateForService:(id <TVISEvolutionService>)arg1;
- (void)snapshotStateDidChangeForService:(id <TVISEvolutionService>)arg1;
@end

