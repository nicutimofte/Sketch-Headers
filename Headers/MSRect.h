#import "_MSRect.h"

@interface MSRect : _MSRect
{
    double proportions;
    BOOL temporarilyConstrainProportions;
    long long proportionsTempDisabled;
    double _right;
    double _bottom;
}

+ (void)shouldNotifyRulerObservers:(BOOL)arg1;
+ (id)rectWithUnionOfRects:(id)arg1;
+ (id)rectWithRect:(struct CGRect)arg1;
+ (id)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double right; // @synthesize right=_right;
- (BOOL)isIntegral;
- (void)setRectByIgnoringProportions:(struct CGRect)arg1;
- (void)setProportions:(double)arg1;
- (double)proportions;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)setTemporarilyConstrainProportions:(BOOL)arg1;
- (void)calculateProportions;
@property(nonatomic) struct CGPoint mid;
- (id)description;
- (void)log;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (id)scaleBy:(double)arg1;
@property(nonatomic) double midY;
@property(nonatomic) double midX;
@property(nonatomic) double maxY;
@property(nonatomic) double minY;
@property(nonatomic) double maxX;
@property(nonatomic) double minX;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGSize size;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
@property(nonatomic) struct CGRect rect;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (void)setHeight:(double)arg1;
- (id)delegate;
- (void)setWidth:(double)arg1;
- (BOOL)shouldConstrainProportions;
- (void)disableProportionsTemporarily:(BOOL)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)objectDidInit;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)subtractHeight:(double)arg1;
- (void)addHeight:(double)arg1;
- (void)subtractWidth:(double)arg1;
- (void)addWidth:(double)arg1;
- (void)subtractY:(double)arg1;
- (void)subtractX:(double)arg1;
- (void)addY:(double)arg1;
- (void)addX:(double)arg1;

@end
