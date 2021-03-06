/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAShapeLayer, NTKCCenteringScrollView, UIView, NTKDigitalTimeLabel, UIBarButtonItem, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle, NSString;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate> {

	CAShapeLayer* _reverseMask;
	NTKCCenteringScrollView* _scrollView;
	double _photoScale;
	CAShapeLayer* _mask;
	UIView* _timeContainer;
	NTKDigitalTimeLabel* _time;
	UIBarButtonItem* _deleteButton;
	UIBarButtonItem* _cancelButton;
	BOOL _cancelConfirmed;
	BOOL _deleteConfirmed;
	/*^block*/id _completionHandler;
	unsigned long long _index;
	NTKCompanionCustomPhotosEditor* _editor;
	NTKFace* _face;
	NTKDigitalTimeLabelStyle* _timeStyle;

}

@property (assign,nonatomic) unsigned long long index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;              //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                       //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabelStyle * timeStyle;                 //@synthesize timeStyle=_timeStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NTKFace *)face;
-(void)setIndex:(unsigned long long)arg1 ;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(void)viewDidLayoutSubviews;
-(void)setFace:(NTKFace *)arg1 ;
-(void)_cancelPressed;
-(void)setTimeStyle:(NTKDigitalTimeLabelStyle *)arg1 ;
-(void)_donePressed;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(unsigned long long)index;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_deletePressed;
-(void)dismissWithSaving:(BOOL)arg1 ;
@end

