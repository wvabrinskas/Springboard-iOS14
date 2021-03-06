/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class NSString;

@interface PUEditActionActivity : UIActivity {

	NSString* _actionName;
	NSString* _systemImageName;
	/*^block*/id _performActivityActionHandler;
	/*^block*/id _canPerformActivityActionHandler;
	NSString* _internalActivityType;
	/*^block*/id _activityBlock;

}

@property (nonatomic,retain) NSString * internalActivityType;               //@synthesize internalActivityType=_internalActivityType - In the implementation block
@property (nonatomic,copy) id activityBlock;                                //@synthesize activityBlock=_activityBlock - In the implementation block
@property (nonatomic,copy) NSString * actionName;                           //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                      //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,copy) id performActivityActionHandler;                 //@synthesize performActivityActionHandler=_performActivityActionHandler - In the implementation block
@property (nonatomic,copy) id canPerformActivityActionHandler;              //@synthesize canPerformActivityActionHandler=_canPerformActivityActionHandler - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)setActivityBlock:(id)arg1 ;
-(NSString *)systemImageName;
-(void)setActionName:(NSString *)arg1 ;
-(id)initWithActionName:(id)arg1 activityType:(id)arg2 systemImageName:(id)arg3 ;
-(void)setSystemImageName:(NSString *)arg1 ;
-(id)performActivityActionHandler;
-(void)setPerformActivityActionHandler:(id)arg1 ;
-(id)canPerformActivityActionHandler;
-(void)setCanPerformActivityActionHandler:(id)arg1 ;
-(NSString *)internalActivityType;
-(void)setInternalActivityType:(NSString *)arg1 ;
-(void)performActivity;
-(id)activityBlock;
-(NSString *)actionName;
-(id)_systemImageName;
@end

