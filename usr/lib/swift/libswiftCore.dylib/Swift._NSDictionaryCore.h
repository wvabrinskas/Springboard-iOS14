/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/swift/libswiftCore.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol Swift._NSDictionaryCore <Swift._NSCopying,Swift._NSFastEnumeration>
@property (readonly,nonatomic) long long count; 
@required
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(long long)arg3;
-(id)objectForKey:(id)arg1;
-(long long)countByEnumeratingWithState:(SCD_Struct_Sw0*)arg1 objects:(id*)arg2 count:(long long)arg3;
-(long long)count;
-(id)initWithObjects:(const id*)arg1 forKeys:(void*)arg2 count:(long long)arg3;
-(id)keyEnumerator;
-(id)copyWithZone:(void*)arg1;

@end

