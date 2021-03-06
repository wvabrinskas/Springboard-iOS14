/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol PKTextInputReserveSpaceControllerDelegate;
@class PKTextInputFeedbackController, PKTextInputElementContent, PKTextInputTextPlaceholder, NSTimer, NSString;

@interface PKTextInputReserveSpaceController : NSObject <PKTextInputDebugStateReporting> {

	BOOL __wasAskedToReserveSpace;
	BOOL __canvasControllerIsDrawing;
	id<PKTextInputReserveSpaceControllerDelegate> _delegate;
	PKTextInputFeedbackController* _feedbackController;
	long long __reserveSpaceState;
	PKTextInputElementContent* __targetElementContent;
	long long __insertionCharacterLocation;
	PKTextInputTextPlaceholder* __textPlaceholder;
	NSTimer* __dismissTimer;
	CGPoint __targetPointInElement;

}

@property (nonatomic,readonly) PKTextInputFeedbackController * feedbackController;                                            //@synthesize feedbackController=_feedbackController - In the implementation block
@property (assign,setter=_setReserveSpaceState:,nonatomic) long long _reserveSpaceState;                                      //@synthesize _reserveSpaceState=__reserveSpaceState - In the implementation block
@property (setter=_setTargetElementContent:,nonatomic,retain) PKTextInputElementContent * _targetElementContent;              //@synthesize _targetElementContent=__targetElementContent - In the implementation block
@property (assign,nonatomic) CGPoint _targetPointInElement;                                                                   //@synthesize _targetPointInElement=__targetPointInElement - In the implementation block
@property (assign,nonatomic) long long _insertionCharacterLocation;                                                           //@synthesize _insertionCharacterLocation=__insertionCharacterLocation - In the implementation block
@property (assign,nonatomic) BOOL _wasAskedToReserveSpace;                                                                    //@synthesize _wasAskedToReserveSpace=__wasAskedToReserveSpace - In the implementation block
@property (assign,nonatomic) BOOL _canvasControllerIsDrawing;                                                                 //@synthesize _canvasControllerIsDrawing=__canvasControllerIsDrawing - In the implementation block
@property (nonatomic,retain) PKTextInputTextPlaceholder * _textPlaceholder;                                                   //@synthesize _textPlaceholder=__textPlaceholder - In the implementation block
@property (nonatomic,retain) NSTimer * _dismissTimer;                                                                         //@synthesize _dismissTimer=__dismissTimer - In the implementation block
@property (nonatomic,readonly) BOOL isReserveSpaceActive; 
@property (nonatomic,readonly) BOOL isReserveSpacePlaceholderVisible; 
@property (assign,nonatomic,__weak) id<PKTextInputReserveSpaceControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKTextInputReserveSpaceControllerDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputReserveSpaceControllerDelegate>)arg1 ;
-(PKTextInputTextPlaceholder *)_textPlaceholder;
-(PKTextInputFeedbackController *)feedbackController;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(id)initWithFeedbackController:(id)arg1 ;
-(BOOL)isReserveSpaceActive;
-(void)setCanvasControllerIsDrawing:(BOOL)arg1 ;
-(void)finishReserveSpaceAndInsertWhitespace:(BOOL)arg1 ;
-(BOOL)isReserveSpacePlaceholderVisible;
-(void)beginIfPossibleWithElement:(id)arg1 atLocation:(CGPoint)arg2 coordinateSpace:(id)arg3 ;
-(void)reserveSpaceWhenReady;
-(void)cancelReserveSpaceIntro;
-(BOOL)tapPointIsInPlaceholder:(CGPoint)arg1 ;
-(void)_setReserveSpaceState:(long long)arg1 ;
-(long long)_reserveSpaceState;
-(void)_setTargetElementContent:(id)arg1 ;
-(void)set_targetPointInElement:(CGPoint)arg1 ;
-(void)_updateReserveSpaceState;
-(void)_finishAndResetStateInsertingWhitespace:(BOOL)arg1 ;
-(void)set_wasAskedToReserveSpace:(BOOL)arg1 ;
-(PKTextInputElementContent *)_targetElementContent;
-(void)_moveToContentLoadedIfReady;
-(void)_moveToShowingIntroIfReady;
-(void)_moveToInsertingPlaceholderIfReady;
-(void)_moveToShowingPlaceholderIfReady;
-(long long)_preferredInsertionLocation;
-(void)set_insertionCharacterLocation:(long long)arg1 ;
-(BOOL)_wasAskedToReserveSpace;
-(long long)_insertionCharacterLocation;
-(void)set_textPlaceholder:(PKTextInputTextPlaceholder *)arg1 ;
-(void)_startDismissTimerWithDelay:(double)arg1 ;
-(void)_insertWhitespaceWithElement:(id)arg1 atReferencePoint:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(NSTimer *)_dismissTimer;
-(void)set_dismissTimer:(NSTimer *)arg1 ;
-(BOOL)_canvasControllerIsDrawing;
-(void)set_canvasControllerIsDrawing:(BOOL)arg1 ;
-(void)_handleAutodismissTimer;
-(CGPoint)_targetPointInElement;
-(CGRect)placeholderFrameInCoordinateSpace:(id)arg1 ;
@end

