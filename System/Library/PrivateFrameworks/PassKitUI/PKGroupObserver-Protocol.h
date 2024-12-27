//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKAccount, PKGroup, PKPass, PKPassDynamicState;

@protocol PKGroupObserver <NSObject>
- (void)group:(PKGroup *)arg1 didUpdateAssociatedAccount:(PKAccount *)arg2 forPass:(PKPass *)arg3;
- (void)group:(PKGroup *)arg1 didRemoveAssociatedAccountForPass:(PKPass *)arg2;
- (void)group:(PKGroup *)arg1 didInsertAssociatedAccount:(PKAccount *)arg2 forPass:(PKPass *)arg3;
- (void)group:(PKGroup *)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didRemovePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didUpdatePassState:(PKPassDynamicState *)arg2 forPass:(PKPass *)arg3 atIndex:(unsigned long long)arg4;
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 withState:(PKPassDynamicState *)arg3 atIndex:(unsigned long long)arg4;
- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 withState:(PKPassDynamicState *)arg3 atIndex:(unsigned long long)arg4;

@optional
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
@end

