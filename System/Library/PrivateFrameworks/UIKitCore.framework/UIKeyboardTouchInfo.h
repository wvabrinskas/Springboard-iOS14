/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UIKBTree, UIKBTouchState;

@interface UIKeyboardTouchInfo : NSObject {

	NSMutableArray* _touchHistory;
	unsigned long long _processedTouchCount;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	BOOL _dragged;
	int _stage;
	int _fingerID;
	BOOL _maySuppressUpAction;
	int _initialKeyState;
	long long _continuousPathState;
	BOOL _delayed;

}

@property (nonatomic,readonly) NSMutableArray * touchHistory;                     //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) UIKBTouchState * touch; 
@property (assign,nonatomic) unsigned long long processedTouchCount;              //@synthesize processedTouchCount=_processedTouchCount - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                                 //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                               //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                                //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;                            //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) BOOL dragged;                                        //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                                           //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) int fingerID;                                        //@synthesize fingerID=_fingerID - In the implementation block
@property (assign,nonatomic) BOOL maySuppressUpAction;                            //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
@property (assign,nonatomic) int initialKeyState;                                 //@synthesize initialKeyState=_initialKeyState - In the implementation block
@property (assign,nonatomic) long long continuousPathState;                       //@synthesize continuousPathState=_continuousPathState - In the implementation block
@property (assign,nonatomic) BOOL delayed;                                        //@synthesize delayed=_delayed - In the implementation block
-(NSMutableArray *)touchHistory;
-(UIKBTree *)key;
-(BOOL)dragged;
-(BOOL)delayed;
-(id)init;
-(void)setSlidOffKey:(UIKBTree *)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(BOOL)maySuppressUpAction;
-(int)initialKeyState;
-(void)setMaySuppressUpAction:(BOOL)arg1 ;
-(void)setInitialKeyState:(int)arg1 ;
-(long long)continuousPathState;
-(void)setContinuousPathState:(long long)arg1 ;
-(unsigned long long)processedTouchCount;
-(void)setProcessedTouchCount:(unsigned long long)arg1 ;
-(int)fingerID;
-(void)setKey:(UIKBTree *)arg1 ;
-(void)addTouch:(id)arg1 ;
-(int)stage;
-(UIKBTouchState *)touch;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(UIKBTree *)slidOffKey;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(void)setDragged:(BOOL)arg1 ;
-(void)setDelayed:(BOOL)arg1 ;
-(void)setStage:(int)arg1 ;
-(void)setFingerID:(int)arg1 ;
-(UIKBTree *)keyplane;
-(void)dealloc;
@end
