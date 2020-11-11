/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPControlDelegate;
@class NSUUID, NSArray, CPImageSet, UIImage, NSString;

@interface CPDashboardButton : NSObject <CPControl, NSSecureCoding> {

	NSUUID* _identifier;
	NSArray* _titleVariants;
	NSArray* _subtitleVariants;
	/*^block*/id _handler;
	CPImageSet* _imageSet;
	id<CPControlDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) CPImageSet * imageSet;                              //@synthesize imageSet=_imageSet - In the implementation block
@property (assign,nonatomic,__weak) id<CPControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSArray * titleVariants;                          //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) NSArray * subtitleVariants;                       //@synthesize subtitleVariants=_subtitleVariants - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<CPControlDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(UIImage *)image;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(NSString *)description;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)handler;
-(CPImageSet *)imageSet;
-(void)handlePrimaryAction;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(NSArray *)titleVariants;
-(NSArray *)subtitleVariants;
-(id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
@end
