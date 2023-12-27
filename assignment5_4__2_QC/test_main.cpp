#include <iostream>
#include "list.h"
#include "catch2/catch_test_macros.hpp"
#include "catch2/catch_session.hpp"

TEST_CASE("PushBack","[PushBack]"){
    
    List list;
    list.PushBack(5);
    list.PushBack(3);
    CHECK(list.Size()==2);
}
TEST_CASE("PushFront","[PushFront]"){

    List list;
    list.PushFront(5);
    list.PushFront(3);
    CHECK(list.Size()==2);
}
TEST_CASE("PopFront","[PopFront]"){

    List list;
    REQUIRE_THROWS(list.PopFront());
    //REQUIRE_THROWS_WITH(list.PopFront(),"list is empty");
    list.PushFront(5);
    list.PushFront(3);
    int popped = list.PopFront();
    CHECK(popped==3);
}
TEST_CASE("PopBack","[PopBack]"){

    List list;
    REQUIRE_THROWS(list.PopBack());
    //REQUIRE_THROWS_WITH(list.PopBack(),"list is empty");
    list.PushBack(5);
    list.PushBack(3);
    int popped = list.PopBack();
    CHECK(popped==3);
}
TEST_CASE("Multiple","[Multiple]"){
    List list;
    list.PushFront(1);
    list.PushFront(3);
    list.PushBack(5);
    CHECK(list.Size()==3);
    int popped = list.PopFront();
    CHECK(popped==3);
    CHECK(list.Size()==2);
}

int main(){
    return Catch::Session().run();
}
