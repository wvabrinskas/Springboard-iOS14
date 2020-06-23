//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class NSString, SBFolderIconImageView;

@interface _SBFolderIconImageViewDisableUpdatesAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    _Bool _invalidated;
    SBFolderIconImageView *_folderIconImageView;
    NSString *_reason;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak SBFolderIconImageView *folderIconImageView; // @synthesize folderIconImageView=_folderIconImageView;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly) Class superclass;
@end
