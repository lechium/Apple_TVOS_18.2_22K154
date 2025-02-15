//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol _UINavigationBarTitleRenamerDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleRenamer : NSObject
{
    struct {
        unsigned int allowsMultipleSessions:1;
    } _flags;	// 8 = 0x8
    id <_UINavigationBarTitleRenamerDelegate> _delegate;	// 16 = 0x10
    NSMutableSet *_trackedSessions;	// 24 = 0x18
}

+ (id)renameServer;	// IMP=0x00600000010803da
- (void).cxx_destruct;	// IMP=0x00000000010811c7
@property(readonly, nonatomic) NSMutableSet *trackedSessions; // @synthesize trackedSessions=_trackedSessions;
@property(nonatomic) __weak id <_UINavigationBarTitleRenamerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_session:(id)arg1 fileRenameDidEnd:(id)arg2;	// IMP=0x0000000001081100
- (void)_session:(id)arg1 fileRenameDidFail:(id)arg2;	// IMP=0x000000000108106a
- (void)_sessionDidCancel:(id)arg1;	// IMP=0x0000000001080fbf
- (void)_sessionTextFieldDidEndEditing:(id)arg1;	// IMP=0x0000000001080f21
- (_Bool)_session:(id)arg1 textFieldShouldEndRenamingWithTitle:(id)arg2;	// IMP=0x0000000001080e86
- (id)_session:(id)arg1 textFieldWillBeginRenamingWithTitle:(id)arg2 selectedRange:(inout struct _NSRange *)arg3;	// IMP=0x0000000001080dd9
- (id)sessionWithIdentifier:(id)arg1;	// IMP=0x0000000001080c97
- (void)endSession:(id)arg1;	// IMP=0x0000000001080b1b
- (void)startSession:(id)arg1;	// IMP=0x00000000010808e8
- (void)sceneWillDeactivateNotification:(id)arg1;	// IMP=0x000000000108068e
- (id)description;	// IMP=0x0000000001080619
- (void)dealloc;	// IMP=0x00000000010805a4
- (id)init;	// IMP=0x00000000010804ed

@end

