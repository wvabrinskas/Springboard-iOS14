/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKContextCountedItem : NSObject <NSSecureCoding> {

	id _item;
	unsigned long long _count;

}

@property (nonatomic,retain) id item;                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)item:(id)arg1 withCount:(unsigned long long)arg2 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)setItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

