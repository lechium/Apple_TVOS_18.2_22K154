//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSDCallHistoryControllerDelegate;

@interface CSDCallHistoryController : NSObject
{
    id <CSDCallHistoryControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007063d
@property(retain, nonatomic) id <CSDCallHistoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)allCallHistoryDeleted;	// IMP=0x0010000000070588
- (void)recentCallsDeleted:(id)arg1;	// IMP=0x0010000000070464
- (id)init;	// IMP=0x0010000000070435

@end

