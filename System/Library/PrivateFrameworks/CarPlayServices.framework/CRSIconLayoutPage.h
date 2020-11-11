/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutPage : NSObject <NSSecureCoding> {

	NSArray* _icons;

}

@property (nonatomic,readonly) NSArray * icons;              //@synthesize icons=_icons - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)icons;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIcons:(id)arg1 ;
@end
