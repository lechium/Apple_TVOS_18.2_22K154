//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSCommandControlBehaviorMonitor;

@protocol CSCommandControlBehaviorMonitorDelegate <NSObject>
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(_Bool)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
@end

